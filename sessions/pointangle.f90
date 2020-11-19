Program pointangle
  implicit none

  type point
     real(4) :: x,y
  end type point

  type(point) :: p
  real(4) :: x,y

  read *,x,y
  print *,"Angle of p: ",angle(p)

contains
  real(4) function angle(p)
    implicit none
    type(point),intent(in) :: p
    angle = atan(y/x)
  end function angle
End Program pointangle
