package cse2001;

public class member {
    private int memberID;
    private String lastName;
    private String firstName;
    private int handicap;
    private char gender;
    private String team;
    private String memberType;
    private int coach;
    private long phone;
    private Date joinDate;

    public member(int memberID, String lastName, String firstName, int handicap, char gender, String team, String memberType, int coach, long phone, int day, String month, int year) {
        this.memberID = memberID;
        this.lastName = lastName;
        this.firstName = firstName;
        this.handicap = handicap;
        this.gender = gender;
        this.team = team;
        this.memberType = memberType;
        this.coach = coach;
        this.phone = phone;
        this.joinDate = new Date(day, month, year);
    }

    public void display() {
        System.out.printf("%d %s %s %d %c %s %s %d %d %s-%s-%d%n", memberID, lastName, firstName, handicap, gender, team, memberType, coach, phone, joinDate.getDay(), joinDate.getMonth(), joinDate.getYear());
    }

    // getters and setters for memberID, lastName, firstName, handicap, gender, team, memberType, coach, and phone
}