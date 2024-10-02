class Room
{
public:
    int room_number;
    int available_seat;
    bool has_Projector;
    int amount_of_computer;
    bool is_lecture;

    // Default constructor
    Room() : room_number(0), available_seat(0), has_Projector(false), amount_of_computer(0), is_lecture(false) {}

    // Parameterized constructor
    Room(int room_num, int seats, bool projector, int computers, bool lecture)
        : room_number(room_num), available_seat(seats), has_Projector(projector), amount_of_computer(computers), is_lecture(lecture) {}
};