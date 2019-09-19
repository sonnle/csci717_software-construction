namespace Problem1 {
    class Rectangle1 {
        public:
            Rectangle1(int w=0, int h=0);

            // Accessor methods
            int GetWidth(void);
            int GetHeight(void);

            // Setter methods
            void SetWidth(int w);
            void SetHeight(int h);

            int ComputeArea(void);
            int ComputePerimeter(void);

        protected:
            int width, height;
    };

    class Square1 : public Rectangle1{
        public:
            /*
             * Square1 has to redefine the set methods
             * to ensure that height = width at all times
            */
            Square1(int s=0);
            void SetWidth(int w);
            void SetHeight(int h);
    };
}
