#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <CGAL/Labeled_image_mesh_domain_3.h>
#include <CGAL/Mesh_domain_with_polyline_features_3.h>

#include <CGAL/make_mesh_3.h>
#include <CGAL/Image_3.h>

// Domain
typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef CGAL::Labeled_image_mesh_domain_3<CGAL::Image_3,K> Mesh_domain;

using namespace std;

int main()
{
  
  CGAL::Image_3 image;
   
  // Reading image file
  std::cout<<"\n Reading the Image file... ";
  image.read("input.inr");
  
  cout << image.vx () << " ! " << image.vy () << " ! " << image.vz () << "\n";
  cout << image.xdim () << " ! " << image.ydim () << " ! " << image.zdim () << "\n";
 
  return 0;
}
