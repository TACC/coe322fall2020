Program norms
  implicit none
  integer :: i,j, row,col
  integer,parameter :: M=3,N=4
  real(4),dimension(M,N) :: mat = &
       [ ( ( (-1)**(i+j)*i*j,i=1,M), j=1,N ) ]
  real(4) :: column_norm, row_norm, inf_norm,one_norm
  
  !! WRONG: print *,mat !!! this does not print a rectangle
  do row=1,M
     print *,mat(row,:)
  end do

  !! Inf norm is max over columns of:
  !! absolute sum of that column
  inf_norm = 0
  do col=1,N
     column_norm = 0
     do row=1,M
        column_norm = column_norm + abs(mat(row,col))
     end do
     inf_norm = max(inf_norm,column_norm)
  end do
  print *,inf_norm
  print *,infinity_norm(mat)

contains
  real(4) function infinity_norm( mat )
    implicit none
    real(4),intent(in),dimension(:,:) :: mat
    integer :: M,N, row,col

    !! WRONG: this gives total #elements: M = size(mat)
    M = size(mat,1); N = size(mat,2)
    !print *,"matrix size:",M,N

    !! remedial emacs: ESC x comment-region
    !! (after control-space & go to other end fo region)
    ! infinity_norm = 0
    ! do col=1,N
    !    column_norm = 0
    !    ! do row=1,M
    !    !    column_norm = column_norm + abs(mat(row,col))
    !    ! end do
    !    column_norm = sum( abs( mat(:,col) ) )
    !    infinity_norm = max(infinity_norm,column_norm)
    ! end do
    infinity_norm = maxval( sum( abs( mat(:,:) ),dim=1 ) )
    
  end function infinity_norm
End Program norms
