import React from 'react';
import './Home.css';

function Home() {
  return (
    <div className="home">
      <div className="hero">
        <h1>Welcome to NSS RSET</h1>
        <p>Not Me But You</p>
      </div>
      
      <div className="featured-section">
        <h2>Latest Updates</h2>
        <div className="updates-grid">
          <div className="update-card">
            <h3>Upcoming Event</h3>
            <p>Blood Donation Camp</p>
            <button className="read-more">Learn More</button>
          </div>
          <div className="update-card">
            <h3>Recent Activity</h3>
            <p>Tree Plantation Drive</p>
            <button className="read-more">Learn More</button>
          </div>
          <div className="update-card">
            <h3>Important Notice</h3>
            <p>NSS Registration Open</p>
            <button className="read-more">Learn More</button>
          </div>
        </div>
      </div>
    </div>
  );
}

export default Home;