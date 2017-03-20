#pragma once

  class Punkt{
    public:
      Punkt();
      Punkt(const Punkt& p);
      Punkt(double x, double y, double z, int color=0);    // mit Default-Parameter
      ~Punkt();
      int getColor();
      static int getCount();
    private:
      double m_x;
      double m_y;
      double m_z;
      int m_color;
      static int c_instanceCount;
  };
