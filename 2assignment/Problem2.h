namespace Problem2 {
    class Square2 {
        public:
            Square2(int s=0);

            // Accessor methods
            int GetSide(void);

            // Setter methods
            void SetSide(int w);

            int ComputeArea(void);
            int ComputePerimeter(void);

        protected:
            int side;
    };

    class Rectangle2 : public Square2 {
        public:
            Rectangle2(int s=0, int os=0);

            // Additional Accessor methods
            int GetOtherSide(void);

            // Additional Setter methods
            void SetOtherSide(int os);

            // Overrides of Functionial methods
            int ComputeArea(void);
            int ComputePerimeter(void);

        protected:
            int otherSide;
    };
}
