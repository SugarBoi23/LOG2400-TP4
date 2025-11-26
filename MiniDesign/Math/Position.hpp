namespace Math {
    class Position {
    public:
        Position();
        Position(const Position& otherPosition);
        Position(int x, int y);

        int getX();
        int getY();

    private:
        int x_;
        int y_;
    };
}