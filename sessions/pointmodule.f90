Module Pointstuff
  type point
     real(4) :: x,y
     contains 
       procedure,public :: angle,distance
  end type point

contains
  real(4) function angle(p)
    implicit none
    class(point),intent(in) :: p
    angle = atan(p%y/p%x)
  end function angle
  real(4) function distance(p,q)
    implicit none
    class(point),intent(in) :: p
    type(point),intent(in) :: q
    distance = sqrt( (p%x-q%x)**2 + (p%y-q%y)**2 )
  end function distance
end Module Pointstuff

Program pointangle
  use Pointstuff
  implicit none

  type(point) :: p1,p2
  real(4) :: a,d

  print *,"Twice two numbers please"
  read *,p1%x,p1%y
  read *,p2%x,p2%y

  a = angle(p1) ! function syntax works too!
  a = p1%angle() ! object syntax nice.
  print *,"Angle of p: ",a
  d = p1%distance(p2)
  print *,"Distance to p2:",d

End Program pointangle
