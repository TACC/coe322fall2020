Program PointBig
  implicit none
  real,dimension(10),target :: array &
       = [1.1, 2.2, 3.3, 4.4, 5.5, &
       9.9, 8.8, 7.7, 6.6, 0.0]
  real,pointer :: biggest_element

  ! This is the original array
  print ’(10f5.2)’,array

  ! Set a pointer to the largest element
  call SetPointer(array,biggest_element)
  ! Just checking:
  print *,"Biggest element is",biggest_element

  ! Now zero what the pointer is pointing at:
  biggest_element = 0
  ! Check that it had the right effect.
  print ’(10f5.2)’,array

contains

  subroutine SetPointer( array,bigpointer )
    implicit none
    ! Note that we do not specify the length
    real,dimension(:),intent(in) :: array
    real,pointer,intent(out) :: bigpointer
    ! local variables
    integer :: element,location_of_max
    real :: max_value

    max_value = -10; location_of_max = 0
    do element=1,size(array)
       if (array(element)>max_value) then
          ! record the maximum value
          max_value = array(element)
          ! record the location of the maximum
          location_of_max = element
       end if
    end do
    bigpointer => array(location_of_max)

  end subroutine SetPointer
End Program PointBig
