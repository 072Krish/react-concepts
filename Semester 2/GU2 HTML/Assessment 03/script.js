let usersData = [];

// Fetch API Data
function fetchData() {
    fetch("https://jsonplaceholder.typicode.com/users")
        .then(response => response.json())
        .then(data => {
            usersData = data;
            displayData(usersData);
        })
        .catch(error => console.log("Error:", error));
}

// Display Data (Mapping)
function displayData(data) {
    const container = document.getElementById("container");
    container.innerHTML = "";

    data.forEach(user => {
        const div = document.createElement("div");
        div.className = "card";

        div.innerHTML = `
            <h3>${user.name}</h3>
            <p>${user.email}</p>
        `;

        container.appendChild(div);
    });
}

// Filter Function
function filterData() {
    const searchValue = document
        .getElementById("search")
        .value.toLowerCase();

    const filteredData = usersData.filter(user =>
        user.name.toLowerCase().includes(searchValue)
    );

    displayData(filteredData);
}

// Event Listener for Search
document.getElementById("search").addEventListener("keyup", filterData);

// Call API on page load
fetchData();



